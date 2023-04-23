// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

const int totalWidth(60);
const int col1Width(15);
const int col2Width(15);
const int col3Width(15);
const int col4Width(15);

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

double populationDecimal(int population) {
    return (double) population / (double) 1'000'000;
}

void tableTitle(std::string title) {
    std::cout << title << std::endl;
}

void tableHeader(std::string col1, std::string col2, std::string col3, std::string col4) {
    std::cout << std::setw(col1Width) << std::left << col1 
    << std::setw(col2Width) << col2 
    << std::setw(col3Width) << col3 
    << std::setw(col4Width) << col4 << std::endl;
}

void tableDivides(int width, char fill) {
    std::cout << std::setw(width) << std::setfill(fill) << '-' << std::endl;
    std::cout << std::setfill(' ');
}

void cityDetails(std::string country, std::string city, long population, std::string currency, double cost) {
    std::cout << std::setw(15) <<std::left << country 
    << std::setw(15) << city 
    << std::setw(15) << std::setprecision(2) << std::fixed << populationDecimal(population)
    << currency << std::setw(15) << std::left << std::fixed << std::setprecision(2) << cost << std::endl;
}

void printTable(struct Tours tours, std::string country, std::string city, std::string population, std::string cost) {
    tableDivides(totalWidth, '-');
    tableTitle(tours.title);
    tableDivides(totalWidth, '-');
    tableHeader(country, city, population, cost);
    for(auto country : tours.countries) {
        tableDivides(totalWidth, '-');
        for(int i =0; i < country.cities.size(); ++i) {
            i == 0 ? cityDetails(country.name, country.cities.at(i).name, country.cities.at(i).population, "$", country.cities.at(i).cost) 
            : cityDetails(" ", country.cities.at(i).name, country.cities.at(i).population, "$", country.cities.at(i).cost);   
        }
    }
    tableDivides(60, '-');
}

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    // Unformatted display so you can see how to access the vector elements
    printTable(tours, "Country", "City", "Population(M)", "Price");

    std::cout << std::endl << std::endl;
    return 0;
}