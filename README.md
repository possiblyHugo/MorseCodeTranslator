
# Morse Code Translator

This C++ program is a Morse code translator that converts Morse code to text and vice versa. It utilizes a class called `Translate` with methods for translation and a mapping of characters to their respective Morse code representations.

## Usage

### Input Format

-   For translating Morse code to text:
    -   Use '-' for dash, '.' for dot, and '/' for space between letters.

### Running the Program

1.  Compile the program using a C++ compiler.
2.  Run the compiled executable.
3.  Follow the on-screen instructions to input either Morse code or text for translation.

### Example


```
`// Compile the code
g++ morse_code_translator.cpp -o morse_code_translator

// Run the program
./morse_code_translator` 
```
## Methods

### `MorseToWord(std::string Morse)`

-   Translates Morse code input into text.
-   Uses '-' for dash, '.' for dot, and '/' for space between letters.

### `MorseToLetter(std::string Morse)`

-   Converts Morse code for a single letter into text.

### `LetterToMorse(std::string Letter)`

-   Converts a single letter into Morse code.

### `PrintMorseCode()`

-   Displays the entire Morse code mapping used by the translator.

## How to Use in Your Code

1.  Include the necessary header files.
2.  Create an instance of the `Translate` class.
3.  Utilize the provided methods for translation.

```cpp

`#include <iostream>
#include <string>
#include <map>
#include <sstream>

// Include Translate class definition here...

int main() {
    std::cout << "Morse Code Translator. \n'-' = dash, '.' = dot, '/' = space \nPlease input your morse code: " << std::endl;
    std::string Morse;
    getline(std::cin, Morse);
    Translate newTranslation;

    std::cout << "Translated Text: ";
    newTranslation.MorseToWord(Morse);

    return 0;
}
```