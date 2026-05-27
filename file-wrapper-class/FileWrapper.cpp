#include <cstdio>
#include <stdexcept>

class FileWrapper {
    private:
        FILE* file_ptr;

    public:

        // This is going to be the constructor of the class
        // Acquires the resource
        FileWrapper(const char* filename, const char* mode) {
            file_ptr = std::fopen(filename, mode);
            if (!file_ptr) {
                throw std::runtime_error("FAILED: Opening file");
            }
        }

        // This is the Destructor of the class
        ~FileWrapper() {
            // TODO: gotta release the resource
        }

        
}