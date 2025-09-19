#include "recipe.hpp"

Ingredient::Ingredient(double n, std::string unit, std::string name) :
    name(name), n(n), unit(unit) {};

Recipe::Recipe(std::string name, std::vector<std::string> tags, 
    int servings, int energy, 
    int protein, double price) 
    : 
    name(name), tags(tags), servings(servings), 
    energy(energy), protein(protein), price(price) {};

std::string Recipe::exportToString()
{
    std::string returnString = "";
    returnString += name + "\n";

    for(std::string tag : tags)
    {
        returnString += "#" + tag + " ";
    }
    returnString += '\n';

    returnString += std::to_string(servings) + " " + std::to_string(energy) + " " + std::to_string(protein) + "\n";

    returnString += "--Ingredients--\n";

    for(Ingredient i : ingredients)
    {
        returnString += std::to_string(i.n) + " " + i.unit + " " + i.name + '\n';
    }

    returnString += "--Steps--\n";

    for (std::string s : steps)
    {
        returnString += s + "\n";
    }
    return returnString;
}

