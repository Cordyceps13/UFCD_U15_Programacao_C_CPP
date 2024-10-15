#include <iostream>
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

/**
 * Recursively searches the current directory and its subdirectories for files with the specified file extension, and prints the full path of each matching file to the console.
 *
 * @param argc The number of command-line arguments, including the program name.
 * @param argv An array of C-style strings containing the command-line arguments.
 * @return 0 if the program completed successfully, 1 if there was an error.
 */
int main(int argc, char* argv[]) {

    if (argc != 2) {

        std::cout << "Usage: " << argv[0] << " <file_extension>" << std::endl;
        return 1;
    }

    std::string file_extension = argv[1];

    if (file_extension[0] != '.') {
        file_extension = "." + file_extension;
    }

    try {
        for (const auto& entry : fs::recursive_directory_iterator(".")) {
            if (entry.is_regular_file() && entry.path().extension() == file_extension) {
                std::cout << entry.path().string() << std::endl;
            }
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
