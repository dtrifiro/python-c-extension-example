# Python c extension example

Basic example to show how a Python C extension is built

```bash
uv venv .venv
source .venv/bin/activate

# to build and install as editable:
uv pip install -e .

# to build it
uv pip install build
python -m build --installer=uv
# wheel is saved to ./dist/
```

## Explanation

    ├── extension.c <- Actual C extension code
    ├── pyproject.toml <- python project metadata
    ├── python_c_extension_example.py <- python code that calls the extension
    ├── README.md
    └── setup.py <- python module and C extension build definition
