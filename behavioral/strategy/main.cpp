#include "logger.h"

int main() {

     Logger logger(std::make_unique<StdStreamWriter>(), std::make_unique<AsIsTextBehavior>());
     logger.write("Text as is to std out");

     logger.setFormatTextBehavior(std::make_unique<UpperTextBehavior>());
     logger.write("Upper text to std out");

     logger.setWriteBehavior(std::make_unique<FileStreamWriter>());
     logger.write("Upper text to file");

     return 0;
}


