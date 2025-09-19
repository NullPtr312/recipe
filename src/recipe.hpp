#pragma once

#include <string>
#include <vector>



class Ingredient
{
    public:
    double n;
    std::string unit;
    std::string name;
};

class Recipe
{
    public:
    std::string name;
    std::vector<std::string> tags;
    int servings;
    int energy;
    int protein;
    double price;

    std::vector<Ingredient> ingredients;
    std::vector<std::string> steps;

    Recipe();
    ~Recipe();

    void loadFromString(char* path);
    void exportToString(char* path);
};