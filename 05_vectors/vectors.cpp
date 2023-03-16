#include <iostream>
#include <vector>

int main() {

    std::vector<double> subway_adult;

    // Declare another vector here:
    std::vector<double> subway_child;

}

#include <iostream>
#include <vector>

int main() {

    std::vector<double> subway_adult = {800, 1200, 1500};

    // Give subway_child some values:

    std::vector<double> subway_child = {400, 600, 750};

}

#include <iostream>
#include <vector>

int main() {

    std::vector<double> subway_adult = {800, 1200, 1500};

    std::vector<double> subway_child = {400, 600, 750};

    // What number at index 2 of subway_child?

    std::cout << subway_child[2];

}

#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> last_jedi;

    // Add characters here:

    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");

    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";

}

#include <iostream>
#include <vector>

int main() {

    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

    // Add more

    grocery.push_back("Cranberries");

    std::cout << grocery.size() << "\n";

}