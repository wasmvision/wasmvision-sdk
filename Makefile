
generate-go:
	wit-bindgen-go generate --out ./components/tinygo -w imports -p wasmvision.com/pkg/ ./wit/

generate-rust:
	wit-bindgen rust --out-dir ./components/rust/wasmvision/src -w imports ./wit/

generate-c:
	wit-bindgen c --out-dir ./components/c/wasmvision -w imports ./wit/

generate-docs:
	wit-bindgen markdown --out-dir ./docs -w imports ./wit/

generate: generate-go generate-rust generate-c
