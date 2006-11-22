/* -*- mode: C -*-  */
/* 
   IGraph library.
   Copyright (C) 2006  Gabor Csardi <csardi@rmki.kfki.hu>
   MTA RMKI, Konkoly-Thege Miklos st. 29-33, Budapest 1121, Hungary
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

/************************ Miscellaneous functions *************************/

/** \defgroup python_interface_conversion Converting between Python and igraph data types
 * \ingroup python_interface */

#ifndef PYTHON_CONVERT_H
#define PYTHON_CONVERT_H

#include <Python.h>
#include "types.h"

typedef enum { IGRAPHMODULE_TYPE_INT=0, IGRAPHMODULE_TYPE_FLOAT }
igraphmodule_conv_t;

int igraphmodule_PyList_to_vector_t(PyObject *list, igraph_vector_t *v, igraph_bool_t need_non_negative, igraph_bool_t pairs);
PyObject* igraphmodule_vector_t_to_PyList(igraph_vector_t *v);
PyObject* igraphmodule_vector_t_to_PyList_pairs(igraph_vector_t *v);
PyObject* igraphmodule_vector_t_to_float_PyList(igraph_vector_t *v);
PyObject* igraphmodule_matrix_t_to_PyList(igraph_matrix_t *m,
						 igraphmodule_conv_t type);
int igraphmodule_PyList_to_matrix_t(PyObject *o, igraph_matrix_t *m);
PyObject* igraphmodule_strvector_t_to_PyList(igraph_strvector_t *v);
int igraphmodule_PyList_to_strvector_t(PyObject* v, igraph_strvector_t *result);
int igraphmodule_PyIter_to_vector_ptr_t(PyObject *it, igraph_vector_ptr_t *v);
int igraphmodule_PyObject_to_vs_t(PyObject *o, igraph_vs_t *vs,
				  igraph_bool_t *return_single);
#endif
