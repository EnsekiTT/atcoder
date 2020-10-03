package main

import (
	"fmt"
	"strings"
)

func main() {
	solve()
}

func solve() {
	var S string
	fmt.Scan(&S)
	if strings.HasSuffix(S, "s") {
		fmt.Println(S + "es")
	} else {
		fmt.Println(S + "s")
	}
}
