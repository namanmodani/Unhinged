# Unhinged

The NachenSmall Software Corporation, which has traditionally only built software for running senior-citizen bingo games, has decided to pivot into a new area. They’ve decided to disrupt the online matchmaking market and build a new dating app called Unhinged.

### Build Notes

Taking in a text file (`members.txt`), Unhinged spits out the most compatible partners over a certain numeric threshold. Compatibility is determined by how similar each profile's attributes are, which are mapped in `translators.txt`. The program then implements match-making via a space-optimized RadixTree data structure to suggest partners. This command-line application supports up to 100,000 member profiles.

Unhinged was created in Winter 2022 for UCLA's CS 32 Project 4 submission, taken under Professor David A. Smallberg.

Software used: C++.

### Build Instructions

This is how to build SuperPeachSisters in a macOS Terminal window.

1. Clone this repository using `$ git clone https://github.com/namanmodani/Unhinged`.
2. To build the program, change into the Unhinged directory and run program from `main`.
3. Follow the terminal prompt by entering the user's email address and intended number of shared attributes.
4. Hopefully find a date :3