# 📖 CLI Watchlist Reader

A terminal-based file reading utility written in C. This program completes the core file handling loop by reading a local `watchlist.txt` database and dynamically printing the stored movie records back to the terminal.

## 🛠️ Tech Stack
<p align="left">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=c,vscode,git&theme=dark" alt="Tech Stack" />
  </a>
</p>

## 📸 Output Preview

<p align="left">
  <img width="600" src="preview.png" alt="Terminal Output Preview" />
</p>

## 🧠 Concepts Covered
* **File Reading (`"r"` mode):** Safely opening existing text files without overwriting data.
* **Buffer Arrays:** Using `char` arrays to temporarily store data pulled from the hard drive.
* **The EOF Loop:** Utilizing `while` loops combined with `fgets()` to read an unknown amount of lines until the End of File is reached.
* **Pointer Validation:** Enforcing `NULL` checks on `FILE *` pointers to prevent runtime segmentation faults.

