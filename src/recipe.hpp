#pragma once

#include <string>
#include <vector>
#include <format>


class Ingredient
{
    public:
    Ingredient(double n, std::string unit, std::string name);
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

    Recipe(std::string name, std::vector<std::string> tags, int servings, int energy, int protein, double price);
    //~Recipe();

    void loadFromString(char* path);
    std::string exportToString();
};