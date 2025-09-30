---
jupyter:
  jupytext:
    text_representation:
      extension: .md
      format_name: markdown
      format_version: '1.3'
      jupytext_version: 1.17.3
  kernelspec:
    display_name: Python 3 (ipykernel)
    language: python
    name: python3
---

```python
%%capture output
!pip install manim
!pip install "manim-voiceover[recorder]"
!pip install "pyaudio"
```

```python
import manim
from manim import *
from manim_voiceover import VoiceoverScene
from manim_voiceover.services.recorder import RecorderService
```

```python
!pip install --upgrade 'manim-voiceover[gtts]'
```

```python
%%manim -qm --disable_caching Intro
from manim_voiceover.services.gtts import GTTSService

class Intro(VoiceoverScene):
    def construct(self):
        self.set_speech_service(GTTSService())
        title = Tex("4.1-2 Vector Spaces")

        with self.voiceover(text="Hello everyone, today I want to go over what was covered in linear algebra for Chapter 4, sections one and two. I wanted to make this video to solidify my understanding of the concept and learn some Manim. :)") as tracker:
            self.play (Create(title))
```

