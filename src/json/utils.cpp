#include <json/utils.hpp>
#include <json/json.hpp>
#include <fstream>
using json = nlohmann::json;

namespace GameJson{

void writeProp(std::string camp, long long value){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);
    
    data["player"][camp] = value;

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();
}

void writeName(std::string name){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);
    
    data["player"]["name"] = name;

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();
}

void writeItem(std::string camp, long long value){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);
    
    data["player"]["items"][camp] = value;

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();
}

long long getData(std::string camp){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();

    return data["player"][camp];
}

std::string getName(){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();

    return data["player"]["name"];
}

long long getItem(std::string camp){
    // Filename
    const std::string file = "data/data.json";
    
    // Open and parse json file
    std::ifstream i(file);
    json data = json::parse(i);

    // Write json file
    std::ofstream o(file);
    o << std::setw(4) << data << std::endl;
    i.close();
    o.close();

    return data["player"]["items"][camp];
}
}