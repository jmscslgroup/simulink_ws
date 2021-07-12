# simulink_ws
ROS Workspace for Simulink generated ROS node. 

## Why this?
When working with Simulink model, we are interested in generating ROS packages in model-based design manner.
However, creating a separate repo for each ROS package means so many repos on GitHub to track which can flood the 
Github repo list. Instead of creating separate repo for each generated ROS package, it is better to have one repo on
Github with src/ diretory. Each new generated ROS package **should** go to src/ directory.

## How to use this repo?
Check out the repo first
```
cd ~
git clone https://github.com/jmscslgroup/simulink_ws
cd simulink_ws
catkin_make
echo 'source ~/simulink_ws/devel/setup.bash' >> ~/.bashrc
source ~/.bashrc
```

# How to add new ROS packages to the `simulink_ws`
When you want to generate a ROS package from your simulink model, make sure you have right parameters in your model parameter settings.
See below:
<img src="https://raw.githubusercontent.com/jmscslgroup/simulink_ws/main/assets/model_config_settings.png" alt="ModelConfiggSettings" align="center"/>
Click Apply.

In the next step, you build and load model.

After that, you can do usual `git add`, `git commit`, and `git push`.

## Licensing

    License: MIT License 
    Copyright Rahul Bhadani, Jonathan Sprinkle, Arizona Board of Regents
    Initial Date: Nov 12, 2019
    Permission is hereby granted, free of charge, to any person obtaining 
    a copy of this software and associated documentation files 
    (the "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to 
    permit persons to whom the Software is furnished to do so, subject 
    to the following conditions:

    The above copyright notice and this permission notice shall be 
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF 
    ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED 
    TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
    PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT 
    SHALL THE AUTHORS, COPYRIGHT HOLDERS OR ARIZONA BOARD OF REGENTS
    BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN 
    AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, 
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE 
    OR OTHER DEALINGS IN THE SOFTWARE.
