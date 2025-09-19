#include <iostream>
#include "recipe.hpp"

int main()
{
    Recipe r1("Mac and Cheese", {"Cheap", "Easy"}, 5, 500, 5, 10.0);
    r1.ingredients = {Ingredient(5, "g", "cheese"), Ingredient(2, "tbs", "butter")};
    r1.steps = {"Add butter", "make it", "Done"};
    std::cout << r1.exportToString() << std::endl;
    
}