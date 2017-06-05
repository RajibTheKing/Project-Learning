CREATE TABLE song (song_id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, 
song_name VARCHAR(100),
song_url VARCHAR(500),
song_image LONGBLOB, 
album_id INT,
artist_id INT,
cat_id INT,
cat_by_alpha_id INT);

CREATE TABLE artist (artist_id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, 
artist_name VARCHAR(100),
artist_image LONGBLOB, 
album_id INT,
cat_id INT,
cat_by_alpha_id INT);

CREATE TABLE category_by_alphabet (cat_by_alpha_id INT NOT NULL PRIMARY KEY,
cat_name VARCHAR(100) );

CREATE TABLE album (album_id INT NOT NULL PRIMARY KEY AUTO_INCREMENT, 
album_name VARCHAR(100),
album_image LONGBLOB, 
artist_id INT,
cat_id INT,
cat_by_alpha_id INT);

CREATE TABLE category_by_type (cat_by_type_id INT NOT NULL PRIMARY KEY, 
cat_name VARCHAR(100));

