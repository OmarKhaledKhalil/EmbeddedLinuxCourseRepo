#!/usr/bin/python3
import google_link

#choose website you want to open 1-Facebook 2-Twitter 3-Youtube  4-Google

link=input("Please Enter The Desired Website to open  : ")

#making the input string in small letters and removing spaces before and after.

link.casefold().strip()

#conditioning to check the desired website to open.


if link=="facebook":
    google_link.Google_Chrome(google_link.facebook_link)

elif link=="twitter":
    google_link.Google_Chrome(google_link.twitter_link)

elif link=="youtube":
    google_link.Google_Chrome(google_link.youtube_link)

elif link=="google":
    google_link.Google_Chrome(google_link.google_search_link)