#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

class Parrot {
private:
    std::vector<std::string> phrases;

public:
    Parrot(const std::string& initialPhrase) {
        phrases.push_back(initialPhrase);
        std::srand(static_cast<int>(std::time(nullptr)));
    }

    void say(int repeatCount = 1) const {
        if (phrases.empty()) return;
        for (int i = 0; i < repeatCount; ++i) {
            int idx = std::rand() % phrases.size();
            std::cout << phrases[idx] << std::endl;
        }
    }

    void addPhrase(const std::string& phrase) {
        phrases.push_back(phrase);
    }
};

int main() {
    Parrot p("Witam tu papuga");
    p.addPhrase("Mowie co innego");
    p.addPhrase("Papuga lubi powtarzac");
    p.say(10);

    return 0;
}