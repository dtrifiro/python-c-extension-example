from setuptools import setup, Extension

setup(
    name="python_c_extension_example",
    version="0.1",
    py_modules=["python_c_extension_example"],
    ext_modules=[Extension("extension", ["extension.c"])],
    # additional arguments here
)
