import shutil
import os

taskname = "Explosion"
dest_dir = "2023-04-03/E_Explosion/Test20"

if not os.path.exists(dest_dir):
    os.makedirs(dest_dir)

src_input = "Testing/TestCase.inp"
dst_input = "Explosion.inp"

src_output = "Testing/TestCase.out"
dst_output = "Explosion.out"

dst_input_file = os.path.join(dest_dir, dst_input)
dst_output_file = os.path.join(dest_dir, dst_output)

shutil.copy(src_input, dst_input_file)
shutil.copy(src_output, dst_output_file)