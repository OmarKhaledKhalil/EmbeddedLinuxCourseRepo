#!/usr/bin/python3

import webbrowser

facebook_link        = "https://www.facebook.com/"
twitter_link         = "https://twitter.com/"
youtube_link         = "https://www.youtube.com/"
google_search_link   = "https://www.google.com/"

#put the path of google chrome in a variable

Chrome="/opt/google/chrome/google-chrome"

#function to execute the opening of the desired website using Google Chrome

def Google_Chrome (link) :
    webbrowser.get(Chrome).open(link)