#pragma once

#include <vector>
#include <string>

#include "process_data.h"

class CSVReader
{
public:
    std::vector<ProcessData> read(const std::string& filename);
};
