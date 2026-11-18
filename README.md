# Fundamentals of C Language

This is where I started coding. These are the C programs I wrote in
college to build a real base in programming, before moving on to Go.

---

## What is inside

- **calculator** — A basic calculator with normal math operations.
- **even odd** — Checks if a number is even or odd.
- **factorial** — Finds the factorial of a number.
- **file read write** — Practicing how to read, write, and add to a
  file.
- **function calculator** — The same calculator, but built using
  separate functions.
- **hello github** — My first file in this repo.
- **pattern printing** — Prints a triangle shape made of stars.
- **pointer basics** — Practicing how pointers work in C.
- **prime number** — Checks if a number is prime.
- **swapping** — Different ways to swap two variables.

---

## Why this matters to me

C is used a lot in real cybersecurity work. Many operating systems,
like Linux, are written in C. Many security tools that scan networks
or check for weak spots are also written in C. Malware itself is often
written in C too, because it lets the writer control the computer very
closely.

In C, the programmer controls memory directly. There is no safety
net. Nothing checks your work for you.

### Advantages of C in cybersecurity

- C is very fast, because it talks almost directly to the hardware.
  This matters for security tools that need to run quickly, like
  antivirus scanners or network monitors.
- C gives full control over memory. A security tool written in C can
  do exactly what it needs to do, without extra layers slowing it
  down or hiding what is happening.
- C is small and light. This makes it a good fit for security work on
  small devices, like routers or IoT devices, where there is not much
  space or power to spare.
- Because C is close to the operating system, it is also the language
  used to study and understand how attacks actually work at a low
  level.

### Disadvantages of C in cybersecurity

- Since the programmer must manage memory by hand, it is very easy to
  make a mistake. If a program writes more data into a space than
  that space can hold, the extra data spills into memory it should
  not touch. This is called a buffer overflow. It is one of the
  oldest and most common ways hackers break into systems.
- C does not check for these mistakes for you. Other newer languages
  often catch memory mistakes automatically. C does not, so bugs like
  this can sit hidden in real software for years before someone finds
  them, sometimes a hacker finds them first.
- Because C gives so much freedom, it is also easier to write unsafe
  code by accident, even when you are not trying to.

Writing C by hand taught me to think carefully about the exact size of
my data and where it lives in memory. That habit carries directly into
my Go security programs now, like the buffer size guard, where I check
the size of input first, before accepting it, so nothing can overflow.

---

## Where C is used

C shows up in the lowest level parts of computers and security work:

- **Operating systems** — Linux itself is written mostly in C. Since
  Linux runs most servers and cloud systems in the world, understanding
  C helps in understanding how the whole system actually works.
- **Security tools** — Many tools that scan networks or check for weak
  spots in a system are written in C, because it runs fast and close
  to the hardware.
- **Malware analysis** — A lot of real malware is written in C. People
  who study malware for a living often need to read C code to
  understand what a harmful program is actually doing.
- **Embedded systems** — Small devices, like routers or IoT devices,
  often run C code, because it is small and does not need much power
  or memory to run.

Mostly, C is used where speed and full control matter the most, even
though it takes more care to write safely.

---

## Status

This was my starting point. I do not add much here anymore, but in the
future I would like to build a bigger C project too, once I have more
time.
