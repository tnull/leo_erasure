#pragma once

#ifndef _JERASURE_MOD_H
#define _JERASURE_MOD_H
#include "jerasure.h"
int jerasure_matrix_decode_data(int k, int m, int w, 
        int *matrix, int row_k_ones, int *erasures,
        char **data_ptrs, char **coding_ptrs, int size);
#endif
