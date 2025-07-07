#ifndef STRING_HXX
#define STRING_HXX
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>
class String
{
    char* _data{};

    unsigned long int _length{};

    unsigned long int _capacity{};

    friend std::ostream& operator<<(std::ostream& out, const String& str)
    {
        if (str._data)
            out << str._data;
        return out;
    }

   public:
    String(const char* str = "")
    {
        _data = new char[strlen(str) + 27];
        strcpy_s(_data, strlen(str) + 1, str);
        _length   = strlen(str);
        _capacity = strlen(str) + 27;
    }

    String(const String& other)
    {
        _data = new char[strlen(other._data) + 1];
        strcpy_s(_data, strlen(other._data) + 1, other._data);
    }

    String(String&& other) noexcept
    {
        _data       = other._data;
        other._data = nullptr;
    }

    String& operator=(const String& other)
    {
        if (this != &other)
        {
            if (_capacity >= other._length)
            {
                std::cout << "not resizing string\n";
                strncpy_s(_data, other._length + 1, other._data, _capacity);
                _length = other._length;
                return *this;
            }
            delete[] _data;
            _data = new char[strlen(other._data) + 1];
            strcpy_s(_data, strlen(other._data) + 1, other._data);
        }
        return *this;
    }

    String& operator=(String&& other) noexcept
    {
        if (this != &other)
        {
            delete[] _data;
            _data       = other._data;
            _length=other._length;
            _capacity=other._capacity;
            other._data = nullptr;
        }
        return *this;
    }

    ~String() { delete[] _data; }

    friend String operator+(const String& lhs, const String& rhs)
    {
        size_t len1   = strlen(lhs._data);
        size_t len2   = strlen(rhs._data);
        char*  buffer = new char[len1 + len2 + 1];
        strcpy_s(buffer, len1 + 1, lhs._data);
        strcpy_s(buffer + len1, len2 + 1, rhs._data);
        String result(buffer);
        result._length=len1+len2;
        result._capacity=lhs._capacity+rhs._capacity+27;
        delete[] buffer;
        return result;
    }

    void info() const noexcept
    {
        std::cout <<&_data<< ", length : " << _length << ", capacity : " << _capacity << std::endl;
    }
};

#endif