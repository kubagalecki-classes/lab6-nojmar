#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());

   for_each(people.begin(),people.end(),[&](auto&i){return i.birthday()});

    return ret_v;
}
