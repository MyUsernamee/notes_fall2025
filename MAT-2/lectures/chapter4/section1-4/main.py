from manim import *
from manim_voiceover import VoiceoverScene
from manim_voiceover.services.recorder import RecorderService

class DefaultTemplate(VoiceoverScene):
    def construct(self):
        self.set_speech_service(RecorderService())
        circle = Circle()  # create a circle
        circle.set_fill(PINK, opacity=0.5)  # set color and transparency

        square = Square()  # create a square
        square.flip(RIGHT)  # flip horizontally
        square.rotate(-3 * TAU / 8)  # rotate a certain amount

        with self.voiceover("Hello this is a test") as tracker:
            self.play(Create(square))  # animate the creation of the square
            self.play(Transform(square, circle))  # interpolate the square into the circle
            self.play(FadeOut(square))  # fade out animation
