#pragma once

#include "mvApp.h"

namespace Marvel {

	PyObject* PyInit_emb(void);

	PyObject* setTheme     (PyObject* self, PyObject* args);

	PyObject* setItemTip     (PyObject* self, PyObject* args);
	PyObject* setItemWidth   (PyObject* self, PyObject* args);
	PyObject* setMainCallback(PyObject* self, PyObject* args);
	PyObject* setItemCallback(PyObject* self, PyObject* args);
	PyObject* addButton      (PyObject* self, PyObject* args);
	PyObject* addInputText   (PyObject* self, PyObject* args, PyObject* kwargs);
	PyObject* addRadioButton (PyObject* self, PyObject* args, PyObject* kwargs);

	PyObject* addTabBar      (PyObject* self, PyObject* args);
	PyObject* addTab         (PyObject* self, PyObject* args);
	PyObject* endTab         (PyObject* self, PyObject* args);
	PyObject* endTabBar      (PyObject* self, PyObject* args);

	PyObject* addMenuBar (PyObject* self, PyObject* args);
	PyObject* addMenu    (PyObject* self, PyObject* args);
	PyObject* endMenu    (PyObject* self, PyObject* args);
	PyObject* endMenuBar (PyObject* self, PyObject* args);
	PyObject* addMenuItem(PyObject* self, PyObject* args);
	
	PyObject* addGroup(PyObject* self, PyObject* args);
	PyObject* endGroup(PyObject* self, PyObject* args);
	PyObject* addChild(PyObject* self, PyObject* args);
	PyObject* endChild(PyObject* self, PyObject* args);
	
	PyObject* addColorEdit4(PyObject* self, PyObject* args);

	PyObject* addCollapsingHeader(PyObject* self, PyObject* args);
	PyObject* addSpacing         (PyObject* self, PyObject* args, PyObject* kwargs);
	PyObject* addSameLine        (PyObject* self, PyObject* args, PyObject* kwargs);
	PyObject* addTooltip         (PyObject* self, PyObject* args);
	PyObject* endTooltip         (PyObject* self, PyObject* args);
	PyObject* addSeperator       (PyObject* self, PyObject* args);
	
	PyObject* getValue(PyObject* self, PyObject* args);

}