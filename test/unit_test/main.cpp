#include <afx.h>
#include <gtest/gtest.h>
#include <iostream>

#define XY_UNIT_TEST
//#include "test_interlaced_uv_alphablend.h"
//#include "test_subsample_and_interlace.h"
//#include "test_alphablend.h"
//#include "test_instrinsics_macro.h"

//#include "test_xy_filter.h"
//#include "xy_filter_benchmark.h"
#include "test_overall.h"


int wmain(int argc, wchar_t ** argv)
{
    if (argc!=2)
    {
        std::wcout<<argv[0]<<L" directory_name"<<std::endl;
        return -1;
    }

    WideCharToMultiByte(CP_UTF8, 0, argv[1], -1, directory, sizeof(directory)/sizeof(char), NULL, NULL);

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}