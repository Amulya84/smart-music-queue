# Smart Music Queue Using Linked List

## Features
* Add a song at the end of the queue.
* Play the next song (remove the first song).
* Skip the next song.
* Search for a song by name.
* Display the waiting queue.
* Exit the program.

## Files
```text
smart-music-queue/
├── code.c
└── README.md
```

## Requirements
* GCC or another C compiler
* Terminal / command prompt, or an online C compiler

## Compile and Run

### Linux / macOS
```bash
gcc code.c -o smart_music_queue
./smart_music_queue
```

### Windows (GCC / MinGW)
```bash
gcc code.c -o smart_music_queue.exe
smart_music_queue.exe
```

## Sample Run
```text
===== SMART MUSIC QUEUE =====
1. Add Song
2. Play Next Song
3. Skip Song
4. Search Song
5. Display Queue
0. Exit

Enter your choice: 1
Enter song name: Believer
Song added successfully!

Enter your choice: 1
Enter song name: Perfect
Song added successfully!

Enter your choice: 5

Music Queue:
Believer -> Perfect -> NULL

Enter your choice: 2
Now Playing: Believer
```

## Time Complexity
Let *n* be the number of songs in the queue.

| Operation | Time Complexity | Explanation |
| :--- | :--- | :--- |
| **Add Song** | `O(1)` | Tail pointer directly accesses the last node |
| **Play Next** | `O(1)` | Removes the head node |
| **Skip Song** | `O(1)` | Uses the same operation as Play Next |
| **Search Song** | `O(n)` | May visit every node |
| **Display Queue** | `O(n)` | Visits every node |

**Space complexity:** `O(n)` for *n* song nodes.

## Limitations
* `scanf("%49s", ...)` reads only one word for the song name. Use `ShapeOfYou` instead of `Shape of You`.
* The program stores only song names.
* Play and Skip simulate selecting/removing a song; no audio is played.
* A production-ready version should check whether `malloc()` returns `NULL`.

## Possible Future Improvements
* Accept song names with spaces.
* Store artist and duration.
* Add remove-by-name functionality.
* Use a doubly linked list for previous/next navigation.
* Connect the queue to an actual audio player.

## Project Details
* **Project:** Smart Music Queue Using Linked List
* **Subject:** Data Structures and Algorithms (DSA)
* **Language:** C
