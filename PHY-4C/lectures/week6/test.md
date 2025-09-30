---
jupyter:
  jupytext:
    text_representation:
      extension: .md
      format_name: markdown
      format_version: '1.3'
      jupytext_version: 1.17.3
  kernelspec:
    display_name: Python 3
    language: python
    name: python3
---

```python
!pip install manim
```

```python
import manim
from manim import *
```

```python
%%manim -qm Test

class Test(Scene):
    def construct(self):
        circle = Circle(4.0)
        self.play(Create(circle))
```

