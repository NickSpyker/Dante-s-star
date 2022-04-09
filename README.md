# Dante’s | *B2 - Elementary Programming in C*
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
![maze_gif](https://user-images.githubusercontent.com/91092966/158021907-444aaf4c-086b-4055-b1ca-aff4909aecc9.gif)
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

- binary name:        generator & solver
- repository name:    CPE_dante_$ACADEMICYEAR
- repository rights:  ramassage-tek
- language:           C

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)

The goal of this project is to generate mazes (in a reasonable amount of time), solve them (in a reasonable amount of time), and print the solution:
- You must have 2 folders : solver with a binary named “solver” in it, generator with binary named “generator” in it.
- Each folder must contain a Makefile compiling the binary and a Makefile at the root must compile all binaries.
```
∼/B-CPE-200> ls -R
:.

solver generator Makefile

./ solver :
solver
[...]

./ generator :
generator
[...]
```
- Each solver must be able to function as follows: ```∼/B-CPE-200> ./solver maze.txt``` and print the solved maze on the standard output.
If there is no solution you must print “no solution found” on the same output.
- The generator must function as follows: ```∼/B-CPE-200> ./generator x y [perfect]``` as the perfect argument is optional, the default generation will be an imperfect maze.

![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
![maze](https://user-images.githubusercontent.com/91092966/158021739-1c7a3684-595f-4fce-9e15-d48bb28b1c96.png)
![-----------------------------------------------------](https://raw.githubusercontent.com/andreasbm/readme/master/assets/lines/rainbow.png)
