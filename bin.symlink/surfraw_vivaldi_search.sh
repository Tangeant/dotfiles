#!/bin/bash
sr -browser=vivaldi-stable $(sr -elvi | tail -n +2 | cut -s -f1 | rofi -p "surfraw" -dmenu)
