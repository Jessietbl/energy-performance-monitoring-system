#pragma once

#include <string>

struct ProcessData
{
    std::string timestamp;

    double steam_flow;
    double fuel_flow;
    double power;

    double production_rate;

    double energy_index;
};
