import sys
import os

files = os.listdir("./")

srcs = []
outputs = []

for file in files:
    if file.endswith(".cpp"):
        with open(file, "r") as f:
            srcs.append((file, f.read().replace('`', '\\`')))
        os.system(f'g++ {file} && ./a.out > output.md')
        with open('output.md', 'r') as f:
            outputs.append(f.read())

with open('output.md', 'w') as f:

    for (( filename, src ), output) in zip(srcs, outputs):
        f.write(f'{filename}\n```cpp\n{src}\n```\n\nOutput:\n```bash\n{output}\n```\n\n')

os.system('pandoc -o screen_shots.pdf ./output.md; magick -density 300 ./screen_shots.pdf -append ./screen_shots.png; cat ./screen_shots.png | wl-copy')
