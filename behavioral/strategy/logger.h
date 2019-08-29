#ifndef CPP_DESIGN_PATTERNS_LOGGER_H
#define CPP_DESIGN_PATTERNS_LOGGER_H

#include "stream_behavior.h"
#include "format_text_behavior.h"

#include <memory>

class Logger
{
public:
     void setWriteBehavior(std::unique_ptr<StreamBehavior>&& sb) {
          sb_ = std::move(sb);
     }

     void setFormatTextBehavior(std::unique_ptr<FormatTextBehavior>&& ftb) {
          ftb_ = std::move(ftb);
     }

     void write(const std::string& text) {
          sb_->write(ftb_->format(text));
     }

private:
     std::unique_ptr<StreamBehavior> sb_;
     std::unique_ptr<FormatTextBehavior> ftb_;
};

#endif //CPP_DESIGN_PATTERNS_LOGGER_H
