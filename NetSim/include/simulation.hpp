//
// Created by Kuba on 12.01.2022.
//

#ifndef NETSIM_SIMULATION_HPP
#define NETSIM_SIMULATION_HPP
#include "reports.hpp"

void simulate(Factory& f,TimeOffset d,std::function<void (Factory&, Time)> rf);


#endif //NETSIM_SIMULATION_HPP
