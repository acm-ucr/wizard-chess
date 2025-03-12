import subprocess

# Run the C++ program
cpp_process = subprocess.Popen(["@/embeddings/Board.cpp"])  # Use "cpp_program.exe" on Windows

# Run the Python program
python_process = subprocess.Popen(["voicerecognition.py", "script.py"])

# Wait for both to finish
cpp_process.wait()
python_process.wait()