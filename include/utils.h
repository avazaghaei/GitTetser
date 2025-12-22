#ifndef UTILS_H
#define UTILS_H

#include <string>

namespace GitTetser {
    class Utils {
    public:
        static std::string getVersion();
        static void log(const std::string& message);
    };
}

#endif // UTILS_H
