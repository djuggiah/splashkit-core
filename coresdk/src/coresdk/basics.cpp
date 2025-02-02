//
//  basics.cpp
//  splashkit
//
//  Created by Andrew Cain on 3/6/17.
//  Copyright © 2017 Andrew Cain. All rights reserved.
//

#include "basics.h"

#include <algorithm>
#include <cstdlib>

#include <functional>
#include <cctype>
#include <locale>

namespace splashkit_lib
{

    // trim see: https://stackoverflow.com/questions/216823/whats-the-best-way-to-trim-stdstring

    // trim from start
    string ltrim(const string &text)
    {
        string s = text;
        s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int c) { return !std::isspace(c);}));
        return s;
    }

    // trim from end
    string rtrim(const string &text)
    {
        string s = text;
        s.erase(std::find_if(s.rbegin(), s.rend(), [](int c) { return !std::isspace(c);}).base(), s.end());
        return s;
    }

    // trim from both ends
    string trim(const string &text)
    {
        return ltrim(rtrim(text));
    }

    string to_lowercase(const string &text)
    {
        string data = text;
        std::transform(data.begin(), data.end(), data.begin(), ::tolower);
        return data;
    }

    string to_uppercase(const string &text)
    {
        string data = text;
        std::transform(data.begin(), data.end(), data.begin(), ::toupper);
        return data;
    }

    // integer check see: https://stackoverflow.com/questions/2844817/how-do-i-check-if-a-c-string-is-an-int#2845275

    bool is_integer(const string &text)
    {
        string s = trim(text);
        if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
        
        char * p;
        strtol(s.c_str(), &p, 10);
        
        return (*p == 0);
    }

    bool is_double(const string &text)
    {
        return is_number(text);
    }

    bool is_number(const string &text)
    {
        string s = trim(text);
        if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
        
        char * p;
        strtod(s.c_str(), &p);
        
        return (*p == 0);
    }

    bool is_float(const string &text)
    {
        string s = trim(text);
        if(s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false;
        
        char * p;
        strtof(s.c_str(), &p);
        
        return (*p == 0);
    }
    
     bool is_char(const string &text)
    {   
        string s = trim(text);
        
        return s.length()==1;
    }
    
    bool is_bool(const string &text)
    {
        string s = to_lowercase(trim(text));
        
        return s == "true" || s == "t" || s == "false" || s == "f" || s == "0" || s == "1"; 
    }
    
    int convert_to_integer(const string &text)
    {
        return std::stoi( text );
    }

    double convert_to_double(const string &text)
    {
        return std::stod( text );
    }
    
   //https://stackoverflow.com/questions/7352099/stdstring-to-char
    char convert_to_char(const string &text)
    {
        const char *c = text.c_str();
        std::cout << c;
        return 0;
    }

    bool convert_to_bool(const string &text)
    {   
        return text == "true"|| text == "t" || text == "1";
    }
}
