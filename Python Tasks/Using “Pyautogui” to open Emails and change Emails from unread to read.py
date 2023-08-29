#!/usr/bin/python3
import pyautogui
import time


#searching for GoogleChrome from Show Applications Menu
pyautogui.hotkey('win')
time.sleep(1)
pyautogui.typewrite("Google Chrome")
time.sleep(1)
pyautogui.hotkey('enter')
time.sleep(10)

#Going to Gmail Tab and entering it 
pyautogui.moveTo(1178 , 139, duration=1)
pyautogui.click()
time.sleep(3)

#Going to mark as read option and clicking on it
pyautogui.moveTo (455,193, duration=1)
pyautogui.click()
pyautogui.moveTo(526,227, duration=1)
pyautogui.click()
