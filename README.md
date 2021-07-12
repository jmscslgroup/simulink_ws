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
