package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

var sc = bufio.NewScanner(os.Stdin)

func getLine() string {
	if len(os.Args) < 2 {
		sc.Scan()
		return sc.Text()
	}
	return os.Args[len(os.Args)-1]
}

func main() {
	inp := getLine()
	sinp := strings.Split(inp, " ")

	// TODO : Something code
	cs := strconv.Atoi(sinp[0]) * strconv.Atoi(simp[1])
	if cs%2 == 0 {
		fmt.Println("Even")
	} else {
		fmt.Println("Odd")
	}
}
