(game-module "1757"
  (title "Europe 1757")
  (version "0.8")
  (blurb "Central Europe in April 1757.")
  (base-module "fred")
  (variants
  	(world-seen true)
  	(see-all false)
  	(sequential false)
  )
)

(include "t-cent-eur")

;;; Modify the defaults in fred.

(add u* start-with 0)

;;; Everybody has joined the war now.

(side 1 (name "Prussia") (adjective "Prussian") (emblem-name "arms-prussia"))
(side 2 (name "Hannover") (adjective "Hannoverian") (emblem-name "arms-hannover"))
(side 3 (name "Austria") (adjective "Austrian") (emblem-name "arms-austria"))
(side 4 (name "Saxony") (adjective "Saxon") (emblem-name "arms-saxony"))
(side 5 (name "France") (adjective "French") (emblem-name "arms-france"))
(side 6 (name "Russia") (adjective "Russian") (emblem-name "arms-russia"))
(side 7 (name "Sweden") (adjective "Swedish") (emblem-name "arms-sweden"))
(side 8 (name "Empire") (adjective "Empire"))

(side 1 (trusts (1 1) (2 1)))
(side 2 (trusts (1 1) (2 1)))

(side 4 (controlled-by 1))

(side 3 (trusts (3 1) (5 1) (6 1) (7 1) (8 1)))
(side 5 (trusts (3 1) (5 1) (6 1) (7 1) (8 1)))
(side 6 (trusts (3 1) (5 1) (6 1) (7 1) (8 1)))
(side 7 (trusts (3 1) (5 1) (6 1) (7 1) (8 1)))
(side 8 (trusts (3 1) (5 1) (6 1) (7 1) (8 1)))

(set sides-max 8)

;; (should put towns and fortresses into a separate module)

(town (n "Danzig") (@ 35 35))
(town (n "Hamburg") (@ 12 32))
(town (n "Emden") (@ 8 30))
(town (n "Thorn") (@ 38 29))
(town (n "Bremen") (@ 13 28))
(town (n "Posen") (@ 36 25))
(town (n "Cassel") (@ 18 19))
(town (n "Leipzig") (@ 27 18))
(town (n "Chemnitz") (@ 29 16))
(town (n "Eger") (@ 31 12))
(town (n "Wurzburg") (@ 24 11))
(town (n "Donauworth") (@ 29 6))
(town (n "Regensburg") (@ 32 6))
(town (n "Passau") (@ 36 5))
(town (n "Ulm") (@ 27 4))

(fortress 22 23 1 (n "Magdeburg"))
(fortress (n "Berlin") (@ 25 26) (s 1))
(fortress (n "Stettin") (@ 26 30))
(fortress (n "Kustrin") (@ 30 25) (s 1))
(fortress 36 21 1 (n "Glogau") (s 1))
(fortress (n "Colberg") (@ 29 34) (s 1))
(fortress (n "Schweidinitz") (@ 39 17) (s 3))
(fortress 40 18 1 (n "Breslau") (s 1))
(fortress (n "Glatz") (@ 40 16) (s 1))
(fortress (n "Brieg") (@ 42 17) (s 1))
(fortress (n "Neisse") (@ 43 15) (s 1))
(fortress (n "Munster") (@ 11 23))
(fortress (n "Minden") (@ 14 24))
(fortress (n "Hannover") (@ 17 25) (s 2))
(fortress (n "Stade") (@ 12 31) (s 2))
(fortress (n "Prague") (@ 35 12) (s 3))
(fortress (n "Brunn") (@ 44 7))
(fortress (n "Olmutz") (@ 46 9) (s 3))
(fortress (n "Vienna") (@ 46 3) (s 3))
(fortress (n "Koniggratz") (@ 40 13))
(fortress (n "Nuremberg") (@ 28 9) (s 8))
(fortress (n "Torgau") (@ 28 19) (s 1) (os 4))
(fortress (n "Dresden") (@ 31 17) (s 1) (os 4))
(fortress (n "Metz") (@ 15 8) (s 5))
(fortress (n "Strasbourg") (@ 20 5) (s 5))
(fortress (n "Venlo") (@ 7 20))
(fortress (n "Roermond") (@ 9 18))
(fortress (n "Cologne") (@ 12 17) (s 5))
(fortress (n "Coblenz") (@ 15 14) (s 5))
(fortress (n "Dusseldorf") (@ 11 19))
(fortress (n "Mainz") (@ 18 12) (s 5))
(fortress (n "Wesel") (@ 9 22))
(fortress (n "Frankfort") (@ 20 13) (s 5))
(fortress (n "Konigsberg") (@ 38 38) (s 1))
(fortress (n "Stralsund") (@ 20 34) (s 7))

(fortress (@ 39 39) (s 6))

(army 25 26 1 (hp 2))
(army 30 25 1 (hp 2))
(army 22 23 1 (hp 7))
(army 28 19 1 (hp 2))
(army 40 18 1 (hp 4))
(army 34 17 1 (hp 18))
(army 42 17 1 (hp 2))
(army 43 15 1 (hp 2))
(army 40 16 1 (hp 2))
(army 39 17 1 (hp 34))
(army 36 21 1)
(army 26 30 1 (hp 20))
(army 31 17 1 (hp 20))
(general 31 17 1 (n "Keith"))
(general 29 16 1 (n "Maurice"))
(general 26 30 1 (n "Lehwaldt"))
(marshal 34 17 1 (n "Brunswick"))
(marshal 39 17 1 (n "Schwerin"))
(prince 31 17 1 (n "Henry"))
;(prince -1 -1 1 (n "Ferdinand"))
(king 31 17 1 (n "Frederick"))

(army 12 31 2 (hp 2))
(army 13 28 2 (hp 2))
(army 15 25 2 (hp 2))
(army 17 25 2 (hp 8))
(army 14 24 2 (hp 5))
(army 16 23 2 (hp 7))
(general 14 24 2 (n "Karl"))
(marshal 16 23 2 (n "Zastrow"))
(prince 17 25 2 (n "Cumberland"))

(army 36 16 3 (hp 28))
(army 40 13 3 (hp 27))
(army 31 12 3 (hp 24))
(army 44 7 3 (hp 8))
(army 46 9 3 (hp 10))
(army 46 3 3 (hp 8))
(army 35 12 3 (hp 15))
(general 31 12 3 (n "Darenberg"))
(general 36 16 3 (n "Koenigsegg"))
(general 46 9 3 (n "Nadasy"))
(marshal 35 12 3 (n "Browne"))
(marshal 40 13 3 (n "Serbeloni"))
(marshal 46 3 3 (n "Daun"))
(king 35 12 3 (n "Charles"))
(depot 36 16 3)

(army 29 17 4 (hp 1))

(army 9 22 5 (hp 8))
(army 11 19 5 (hp 8))
(army 9 18 5 (hp 24))
(army 12 17 5)
(army 15 14 5)
(army 20 13 5)
(army 18 12 5)
(army 15 8 5)
(army 7 20 5 (hp 30))
(army -20 -5 5 (hp 20) (cp -1) (appear 10))
(general 7 20 5 (n "Broglie"))
(general 9 22 5 (n "Chevert"))
(general 9 18 5 (n "Contades"))
(general 11 19 5 (n "St. Germain"))
(marshal 7 20 5 (n "D'Estrees"))
(marshal -20 -5 5 (cp -1) (n "Soubise") (appear 10))

(army -39 -38 6 (hp 40) (cp -1) (appear 8))
(general -39 -38 6 (n "Fermor") (cp -1) (appear 8))
(marshal -39 -38 6 (n "Apraxin") (cp -1) (appear 8))

(army 20 34 7 (hp 20))
(marshal 20 34 7 (n "Hamilton"))

(army 28 9 8 (hp 1))
(army -28 -9 8 (hp 18) (cp -1) (appear 8))
(marshal -28 -9 8 (n "von Sachsen-Hildburghausen") (cp -1) (appear 8))

;;; Need some better scorekeepers.

(scorekeeper (do last-side-wins))

(set initial-date "1 Apr 1757")

(set initial-year-part 7)

;;; Game only lasts until the end of the year (armies would
;;; invariably go into winter quarters from December thru March).

(set last-turn 19)
