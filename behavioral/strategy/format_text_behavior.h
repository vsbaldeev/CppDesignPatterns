#ifndef CPP_DESIGN_PATTERNS_FORMAT_TEXT_BEHAVIOR_H
#define CPP_DESIGN_PATTERNS_FORMAT_TEXT_BEHAVIOR_H

#include <string>
#include <cstddef>
#include <algorithm>

class FormatTextBehavior
{
public:
     virtual std::string format(const std::string& text) = 0;
     virtual ~FormatTextBehavior() = default;
};

class AsIsTextBehavior : public FormatTextBehavior
{
public:
     std::string format( const std::string& text ) override {
          return text;
     }
};

class UpperTextBehavior : public FormatTextBehavior
{
public:
     std::string format( const std::string& text ) override {
          std::string upper_string;
          std::transform( text.begin(),
                          text.end(),
                          std::back_inserter(upper_string),
                          []( std::string::value_type c ) { return std::toupper( c ); } );
          return upper_string;
     }
};


#endif //CPP_DESIGN_PATTERNS_FORMAT_TEXT_BEHAVIOR_H
