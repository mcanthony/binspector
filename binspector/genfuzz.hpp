/*
    Copyright 2014 Adobe
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/
/**************************************************************************************************/

#ifndef BINSPECTOR_GENFUZZER_HPP
#define BINSPECTOR_GENFUZZER_HPP

// boost
#include <boost/filesystem.hpp>

// application
#include <binspector/forest.hpp>

/**************************************************************************************************/

void genfuzz(const inspection_forest_t&     forest,
             const boost::filesystem::path& output_root);

/**************************************************************************************************/
// BINSPECTOR_GENFUZZER_HPP
#endif

/**************************************************************************************************/