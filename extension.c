#include <Python.h>

static PyObject *example_method(PyObject *self, PyObject *args) {
  const char *name;

  if (!PyArg_ParseTuple(args, "s", &name))
    return NULL;

  PyObject *response = PyUnicode_FromFormat("Hello, %s!\n", name);
  return response;
}

static PyMethodDef ExampleMethods[] = {
    {"example_method", example_method, METH_VARARGS, "An example method"},
    {NULL, NULL, 0, NULL}};

static struct PyModuleDef example_module = {
    PyModuleDef_HEAD_INIT, "extension", /* name of module */
    NULL,                               /* module documentation, may be NULL */
    -1, /* size of per-interpreter state of the module,
         or -1 if the module keeps state in global variables. */
    ExampleMethods};

PyMODINIT_FUNC PyInit_extension(void) {
  return PyModule_Create(&example_module);
}
