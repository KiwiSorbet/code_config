import {defineConfig} from "vite";

export default defineConfig({
    build: {outDir: "build", emptyOutDir: true},
    server: {port: 4000, open: true},
});
