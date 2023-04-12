import os

# Define the path where you want to create directories
path = "/2023-04-03/C_FibonacciRectangle/"

# Create directories from Test01 to Test20
for i in range(1, 21):
    # Use zfill to add leading zeros if necessary
    folder_name = f"Test{i:02d}"
    folder_path = os.path.join(path, folder_name)
    os.makedirs(folder_path)