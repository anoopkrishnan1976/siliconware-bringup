# soulware_manifest.md

🧘 Ritual log for the creation of `siliconware-bringup`  
A ceremony of embedded mastery and poetic reflection.

---

## 🛠️ Setup Steps

### 🔹 Folder Creation

```bash
mkdir -p ~/projects/siliconware-bringup
cd ~/projects/siliconware-bringup
git init


touch bitvector.h bitvector.c test_bitvector.c README.md


📦 Bitvector Module
bitvector.h
Declares constants: MAX_BITS, WORD_SIZE, ARRAY_SIZE

Defines BitVector struct and APIs:

set_bit, clear_bit, get_bit

count_set_bits, find_first_zero

bitvector.c
Implements all declared functions using clean bitwise logic

Uses uint32_t arrays for compact tracking

test_bitvector.c
Verifies correctness of each operation

Simulates edge cases and prints expected outputs

🧪 Compilation & Test
bash
gcc bitvector.c test_bitvector.c -o test_bv
./test_bv
Expected output:

Code
Test set/get:
Bit 5: 1
Bit 31: 1
Bit 32: 1
Bit 33: 0

Test clear:
Bit 10: 0

Test count_set_bits:
Count: 3

Test find_first_zero:
First zero at: 10


🌐 GitHub Ritual
🔹 Remote Setup
bash
git remote add origin https://github.com/anoopkrishnan1976/siliconware-bringup.git
🔹 First Commit
bash
git add .
git commit -m "Initial soulware commit: bitvector module and test harness"
git branch -M main
🔹 Personal Access Token Push
bash
git push -u origin main
Used GitHub token for authentication. Password authentication is deprecated.

📜 README Scroll
Finalized and pushed a poetic README.md with:

Project overview

Module listing

Build instructions

Philosophy and author signature

Commit message:

bash
git commit -m "Final soulware README scroll"
